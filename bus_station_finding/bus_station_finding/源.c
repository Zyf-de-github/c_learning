#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>


int no_finding_flag;//线路未找到标志位

// 菜单展示
void ShowMenu()
{
    printf("\n");
    printf("***************************************************************\n");
    printf("***************************************************************\n");
    printf("*********          Welcome         ******      *******      ***\n");
    printf("*********                          ******   *   *****   *   ***\n");
    printf("*********   1      BuildingWay     ******   **   ***   **   ***\n");
    printf("*********                          ******   ***   *   ***   ***\n");
    printf("*********   2      FindingWay      ******   ****     ****   ***\n");
    printf("*********                          ******   *****   *****   ***\n");
    printf("*********   3   ChosingTheBeseWay  ****************************\n");
    printf("*********                          ***************  ***********\n");
    printf("*********   4        AddWay        **************    **********\n");
    printf("*********                          ************   **   ********\n");
    printf("*********   5      DelateWay       **********   *****   *******\n");
    printf("*********                          ********               *****\n");
    printf("*********   6       ShowWay        ******   *************   ***\n");
    printf("*********                          ****   *****************   *\n");
    printf("*********   7        Clear         ****************************\n");
    printf("*********                          ******                ******\n");
    printf("*********   0        Exit          ******   ***********    ****\n");
    printf("*********                          ******   ***********    ****\n");
    printf("*********                          ******               *******\n");
    printf("*********    Press the number to   ******   *******************\n");
    printf("*********          continue        ******   *******************\n");
    printf("*****************************************   *******************\n");
    printf("***************************************************************\n");


}

//结构体定义
typedef struct StationNode 
{
    int BusNum[4];                  //车辆号码
    char name[30];                  //站点名字
    struct StationNode* front[4];   //前一站站名
    struct StationNode* next[4];    //后一站站名
    int id;                         //站点id
    //struct StationNode* up;       /站点id排序上一站
    struct StationNode* down;       //站点id排序下一站
    int flag;                       //查找标志位
    int time;                       //上一站到本站的时间
}StationNode;


StationNode* BusStart[10] = { NULL };
//前到后，后到前死循环

//构建路线，如增加线路，修改新路后需要重新构建
StationNode* BuildingWay()
{
    FILE* file = fopen("E:\\code\\c\\bus_station_finding\\bus_station.txt", "r");
    if (file == NULL)
    {
        printf("File open fail.\n");
        return NULL;
    }

    char buffer[256];
    StationNode* s = NULL, * id_head = NULL;//, * r = NULL;
    while (fgets(buffer, sizeof(buffer), file) != NULL)  // 第一次循环，创建id链表
    {
        //printf("%s", buffer); // 输出当前行
        if(id_head==NULL)
        {
            s = (StationNode*)malloc(sizeof(StationNode));
            int a;//临时变量
            sscanf(buffer, "%d %s %d", &a, s->name, &a);
            s->id = 0;
            s->BusNum[0] = 0;
            s->BusNum[1] = 0;
            s->BusNum[2] = 0;
            s->BusNum[3] = 0;
            s->flag = 0;
            s->next[0] = NULL;
            s->next[1] = NULL;
            s->next[2] = NULL;
            s->next[3] = NULL;
            s->front[0] = NULL;
            s->front[1] = NULL;
            s->front[2] = NULL;
            s->front[3] = NULL;
            s->down = NULL;
            id_head = s;
            //r = s;
        }
        else
        {
            int a;//临时变量 
            char name[30];
            sscanf(buffer, "%d %s %d", &a,name, &a);
            for(StationNode* i = id_head;;i=i->down)
            {
                if (i->down == NULL)
                {
                    s = (StationNode*)malloc(sizeof(StationNode)); 
                    s->down = NULL; 
                    s->BusNum[0] = 0;
                    s->BusNum[1] = 0;
                    s->BusNum[2] = 0;
                    s->BusNum[3] = 0;
                    s->flag = 0;
                    s->next[0] = NULL;
                    s->next[1] = NULL;
                    s->next[2] = NULL;
                    s->next[3] = NULL;
                    s->front[0] = NULL;
                    s->front[1] = NULL;
                    s->front[2] = NULL;
                    s->front[3] = NULL;
                    s->id = i->id + 1;
                    strcpy(s->name, name);
                    i->down = s;
                    break;
                }
                if (strcmp(name, i->name) == 0)
                {
                    break;
                }
            }
        }
    }
    fclose(file);//第一次遍历，存站点id




    file = fopen("E:\\code\\c\\bus_station_finding\\bus_station.txt", "r");
    if (file == NULL)
    {
        printf("File open fail.\n");
        return NULL;
    }
    int last_bus_num=0;
    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        int bus_num;
        char name[30] = { 0 };
        int time;
        sscanf(buffer, "%d %s %d", &bus_num, name, &time);
        for(StationNode* i = id_head;; i = i->down)
        {
            if (strcmp(i->name, name) == 0)
            {
                if (last_bus_num == bus_num)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        if (i->front[j] == NULL)
                        {
                            i->front[j] = s;
                            break;
                        }
                    }
                    for (int j = 0; j < 4; j++)
                    {
                        if (s->next[j] == NULL)
                        {
                            s->next[j] = i;
                            break;
                        }
                    }
                }
                else if (last_bus_num != bus_num)
                {
                    for (int j = 0; j < 10; j++)
                    {
                        if (BusStart[j] == NULL)
                        {
                            BusStart[j] = i;
                            break;
                        }
                    }
                }
                for (int j = 0; j < 4; j++)
                {
                    if (i->BusNum[j] == 0)
                    {
                        i->BusNum[j] = bus_num;
                        break;
                    }
                }
                i->time = time;
                s = i;
                break;
            }
            else if (i->down == NULL)
            {
                printf("Reading error.\n");
                break;
            }
        }
        last_bus_num = bus_num;
    }
    fclose(file);//第二次遍历，建立公交车链表

    printf("Building successful.\n");
    return id_head;
}


//函数声明
StationNode* BastFinalMap[100] = { NULL };//最好路线推荐
int temp_bus_station[4] = { 0 };//公交车站点临时变量
int type_time = 1000;//最大时间中间变量
void DFSFinding(StationNode* ComingStatio, StationNode* StartStation, StationNode* FinalStation, StationNode* MyStack[], StationNode* FinalMap[], int* ptr_stack, int* ptr_map);
void BastChoice(StationNode* ComingStatio, StationNode* StartStation, StationNode* FinalStation, StationNode* MyStack[], StationNode* FinalMap[], int* ptr_stack, int* ptr_map);

//查找路线，并通过递归输出
void FindingWay(StationNode* id_head, int type_mode)
 {
    type_time = 1000;
    char CurrentPlace[30];
    char GotoPlace[30];
    printf("Please enter your current place >> ");
    scanf("%s", CurrentPlace);
    StationNode* StartStation = NULL;
    for (StartStation=id_head;; StartStation = StartStation->down)
    {
        if (StartStation == NULL)
        {
            printf("No found this station.\n");
            return;
        }
        else
        {
            if (strcmp(StartStation->name, CurrentPlace) == 0)
            {
                break;
            }
        }
    }
    printf("Please enter your destination >> ");
    scanf("%s", GotoPlace);
    printf("\n");
    StationNode* FinalStation = NULL;
    for (FinalStation = id_head;; FinalStation = FinalStation->down)
    {
        if (FinalStation == NULL)
        {
            printf("No found this station.\n");
            return;
        }
        else
        {
            if (strcmp(FinalStation->name, GotoPlace) == 0)
            {
                break;
            }
        }
    }

    StationNode* MyStack[30] = { NULL };//创建一个宽度为30的伪堆栈
    StationNode* FinalMap[100] = { NULL };//最终找到的线路

    int ptr_stack = 0;
    int ptr_map = 0;
    int time;
    if (StartStation == FinalStation)
    {
        printf("You are already stand in your destination.\n");
    }
    else
    {
        if(type_mode==1)
        {
            DFSFinding(StartStation, StartStation, FinalStation, MyStack, FinalMap, &ptr_stack, &ptr_map);//递归深度查找
        }
        else if(type_mode == 2)
        {
            BastChoice(StartStation, StartStation, FinalStation, MyStack, FinalMap, &ptr_stack, &ptr_map);//递归深度查找)





            int time = 0;
            for (int i = 0; i < 100; i++)
            {
                if (BastFinalMap[i] == NULL)
                {
                    break;
                }
                time += BastFinalMap[i]->time;
            }
            printf("Spending time : %d\n", time);
            if (BastFinalMap[1] != 0)
            {
                if ((BastFinalMap[0]->BusNum[0] == BastFinalMap[1]->BusNum[0] || BastFinalMap[0]->BusNum[0] == BastFinalMap[1]->BusNum[1] || BastFinalMap[0]->BusNum[0] == BastFinalMap[1]->BusNum[2]) && BastFinalMap[0]->BusNum[0] != 0)
                    printf(" %d", BastFinalMap[0]->BusNum[0]);
                if ((BastFinalMap[0]->BusNum[1] == BastFinalMap[1]->BusNum[0] || BastFinalMap[0]->BusNum[1] == BastFinalMap[1]->BusNum[1] || BastFinalMap[0]->BusNum[1] == BastFinalMap[1]->BusNum[2]) && BastFinalMap[0]->BusNum[1] != 0)
                    printf(" %d", BastFinalMap[0]->BusNum[1]);
                if ((BastFinalMap[0]->BusNum[2] == BastFinalMap[1]->BusNum[0] || BastFinalMap[0]->BusNum[2] == BastFinalMap[1]->BusNum[1] || BastFinalMap[0]->BusNum[2] == BastFinalMap[1]->BusNum[2]) && BastFinalMap[0]->BusNum[2] != 0)
                    printf(" %d", BastFinalMap[0]->BusNum[2]);
                if ((BastFinalMap[0]->BusNum[3] == BastFinalMap[1]->BusNum[0] || BastFinalMap[0]->BusNum[3] == BastFinalMap[1]->BusNum[1] || BastFinalMap[0]->BusNum[3] == BastFinalMap[1]->BusNum[2]) && BastFinalMap[0]->BusNum[3] != 0)
                    printf(" %d", BastFinalMap[0]->BusNum[3]);

                printf(" %s ", BastFinalMap[0]->name);
                for (int temp = 0; temp < 4; temp++)
                {
                    temp_bus_station[temp] = BastFinalMap[0]->BusNum[temp];
                }
            }
            else
            {
                if (BastFinalMap[0]->BusNum[0] != 0)
                    printf(" %d", BastFinalMap[0]->BusNum[0]);
                if (BastFinalMap[0]->BusNum[1] != 0)
                    printf(" %d", BastFinalMap[0]->BusNum[1]);
                if (BastFinalMap[0]->BusNum[2] != 0)
                    printf(" %d", BastFinalMap[0]->BusNum[2]);
                if (BastFinalMap[0]->BusNum[3] != 0)
                    printf(" %d", BastFinalMap[0]->BusNum[3]);

                printf(" %s ", BastFinalMap[0]->name);
                for (int temp = 0; temp < 4; temp++)
                {
                    temp_bus_station[temp] = BastFinalMap[0]->BusNum[temp];
                }
            }
            for (int i = 1; i < 100; i++)
            {
                if (BastFinalMap[i] == NULL)
                {
                    break;
                }
                printf(" --> ");
                if (BastFinalMap[i + 1] != 0)
                {
                    if ((BastFinalMap[i]->BusNum[0] == BastFinalMap[i + 1]->BusNum[0] || BastFinalMap[i]->BusNum[0] == BastFinalMap[i + 1]->BusNum[1] || BastFinalMap[i]->BusNum[0] == BastFinalMap[i + 1]->BusNum[2]) && BastFinalMap[i]->BusNum[0] != 0)
                        printf(" %d", BastFinalMap[i]->BusNum[0]);
                    if ((BastFinalMap[i]->BusNum[1] == BastFinalMap[i + 1]->BusNum[0] || BastFinalMap[i]->BusNum[1] == BastFinalMap[i + 1]->BusNum[1] || BastFinalMap[i]->BusNum[1] == BastFinalMap[i + 1]->BusNum[2]) && BastFinalMap[i]->BusNum[1] != 0)
                        printf(" %d", BastFinalMap[i]->BusNum[1]);
                    if ((BastFinalMap[i]->BusNum[2] == BastFinalMap[i + 1]->BusNum[0] || BastFinalMap[i]->BusNum[2] == BastFinalMap[i + 1]->BusNum[1] || BastFinalMap[i]->BusNum[2] == BastFinalMap[i + 1]->BusNum[2]) && BastFinalMap[i]->BusNum[2] != 0)
                        printf(" %d", BastFinalMap[i]->BusNum[2]);
                    if ((BastFinalMap[i]->BusNum[3] == BastFinalMap[i + 1]->BusNum[0] || BastFinalMap[i]->BusNum[3] == BastFinalMap[i + 1]->BusNum[1] || BastFinalMap[i]->BusNum[3] == BastFinalMap[i + 1]->BusNum[2]) && BastFinalMap[i]->BusNum[3] != 0)
                        printf(" %d", BastFinalMap[i]->BusNum[3]);

                    printf(" %s ", BastFinalMap[i]->name);
                    for (int temp = 0; temp < 4; temp++)
                    {
                        temp_bus_station[temp] = BastFinalMap[i]->BusNum[temp];
                    }
                }
                else
                {
                    for (int temp = 0; temp < 4; temp++)
                    {
                        if (BastFinalMap[i]->BusNum[0] == temp_bus_station[temp] && temp_bus_station[temp] != 0)
                            printf(" %d", BastFinalMap[i]->BusNum[0]);
                        if (BastFinalMap[i]->BusNum[1] == temp_bus_station[temp] && temp_bus_station[temp] != 0)
                            printf(" %d", BastFinalMap[i]->BusNum[1]);
                        if (BastFinalMap[i]->BusNum[2] == temp_bus_station[temp] && temp_bus_station[temp] != 0)
                            printf(" %d", BastFinalMap[i]->BusNum[2]);
                        if (BastFinalMap[i]->BusNum[3] == temp_bus_station[temp] && temp_bus_station[temp] != 0)
                            printf(" %d", BastFinalMap[i]->BusNum[3]);
                    }

                    printf(" %s ", BastFinalMap[i]->name);
                    for (int temp = 0; temp < 4; temp++)
                    {
                        temp_bus_station[temp] = 0;
                    }
                }
            }

            printf("\n");
            printf("\n");
        }
        else
        {
            printf("error.\n");
            return;
        }
    }
 }


 void DFSFinding(StationNode* ComingStatio, StationNode* StartStation, StationNode* FinalStation, StationNode* MyStack[], StationNode* FinalMap[], int* ptr_stack, int* ptr_map)
 {
     StartStation->flag = 1;
     FinalMap[*ptr_map] = StartStation;
     (*ptr_map)++;
     if (StartStation == FinalStation)
     {
         no_finding_flag = 0;
         int time=0;
         for (int i = 0; i < *ptr_map; i++)
         {
             time += FinalMap[i]->time;
         }
         printf("Spending time : %d\n", time);
         if (FinalMap[1] != 0)
         {
             if ((FinalMap[0]->BusNum[0] == FinalMap[1]->BusNum[0] || FinalMap[0]->BusNum[0] == FinalMap[1]->BusNum[1] || FinalMap[0]->BusNum[0] == FinalMap[1]->BusNum[2]) && FinalMap[0]->BusNum[0] != 0)
                 printf(" %d", FinalMap[0]->BusNum[0]);
             if ((FinalMap[0]->BusNum[1] == FinalMap[1]->BusNum[0] || FinalMap[0]->BusNum[1] == FinalMap[1]->BusNum[1] || FinalMap[0]->BusNum[1] == FinalMap[1]->BusNum[2]) && FinalMap[0]->BusNum[1] != 0)
                 printf(" %d", FinalMap[0]->BusNum[1]);
             if ((FinalMap[0]->BusNum[2] == FinalMap[1]->BusNum[0] || FinalMap[0]->BusNum[2] == FinalMap[1]->BusNum[1] || FinalMap[0]->BusNum[2] == FinalMap[1]->BusNum[2]) && FinalMap[0]->BusNum[2] != 0)
                 printf(" %d", FinalMap[0]->BusNum[2]);
             if ((FinalMap[0]->BusNum[3] == FinalMap[1]->BusNum[0] || FinalMap[0]->BusNum[3] == FinalMap[1]->BusNum[1] || FinalMap[0]->BusNum[3] == FinalMap[1]->BusNum[2]) && FinalMap[0]->BusNum[3] != 0)
                 printf(" %d", FinalMap[0]->BusNum[3]);

             printf(" %s ", FinalMap[0]->name);
             for (int temp = 0; temp < 4; temp++)
             {
                 temp_bus_station[temp] = FinalMap[0]->BusNum[temp];
             }
         }
         else
         {
             if(FinalMap[0]->BusNum[0]!=0)
                printf(" %d", FinalMap[0]->BusNum[0]);
             if (FinalMap[0]->BusNum[1] != 0)
                 printf(" %d", FinalMap[0]->BusNum[1]);
             if (FinalMap[0]->BusNum[2] != 0)
                 printf(" %d", FinalMap[0]->BusNum[2]);
             if (FinalMap[0]->BusNum[3] != 0)
                 printf(" %d", FinalMap[0]->BusNum[3]);

             printf(" %s ", FinalMap[0]->name);
             for (int temp = 0; temp < 4; temp++)
             {
                 temp_bus_station[temp] = FinalMap[0]->BusNum[temp];
             }
         }
         for (int i = 1; i < *ptr_map; i++)
         {
             printf(" --> ");
             if (FinalMap[i+1] != 0)
             {
                 if ((FinalMap[i]->BusNum[0] == FinalMap[i + 1]->BusNum[0] || FinalMap[i]->BusNum[0] == FinalMap[i + 1]->BusNum[1] || FinalMap[i]->BusNum[0] == FinalMap[i + 1]->BusNum[2]) && FinalMap[i]->BusNum[0] != 0)
                     printf(" %d", FinalMap[i]->BusNum[0]);
                 if ((FinalMap[i]->BusNum[1] == FinalMap[i + 1]->BusNum[0] || FinalMap[i]->BusNum[1] == FinalMap[i + 1]->BusNum[1] || FinalMap[i]->BusNum[1] == FinalMap[i + 1]->BusNum[2]) && FinalMap[i]->BusNum[1] != 0)
                     printf(" %d", FinalMap[i]->BusNum[1]);
                 if ((FinalMap[i]->BusNum[2] == FinalMap[i + 1]->BusNum[0] || FinalMap[i]->BusNum[2] == FinalMap[i + 1]->BusNum[1] || FinalMap[i]->BusNum[2] == FinalMap[i + 1]->BusNum[2]) && FinalMap[i]->BusNum[2] != 0)
                     printf(" %d", FinalMap[i]->BusNum[2]);
                 if ((FinalMap[i]->BusNum[3] == FinalMap[i + 1]->BusNum[0] || FinalMap[i]->BusNum[3] == FinalMap[i + 1]->BusNum[1] || FinalMap[i]->BusNum[3] == FinalMap[i + 1]->BusNum[2]) && FinalMap[i]->BusNum[3] != 0)
                     printf(" %d", FinalMap[i]->BusNum[3]);

                 printf(" %s ", FinalMap[i]->name);
                 for (int temp = 0; temp < 4; temp++)
                 {
                     temp_bus_station[temp] = FinalMap[i]->BusNum[temp];
                 }
             }
             else
             {
                 for (int temp = 0; temp < 4; temp++)
                 {
                     if (FinalMap[i]->BusNum[0] == temp_bus_station[temp] && temp_bus_station[temp] != 0)
                         printf(" %d", FinalMap[i]->BusNum[0]);
                     if (FinalMap[i]->BusNum[1] == temp_bus_station[temp] && temp_bus_station[temp] != 0)
                         printf(" %d", FinalMap[i]->BusNum[1]);
                     if (FinalMap[i]->BusNum[2] == temp_bus_station[temp] && temp_bus_station[temp] != 0)
                         printf(" %d", FinalMap[i]->BusNum[2]);
                     if (FinalMap[i]->BusNum[3] == temp_bus_station[temp] && temp_bus_station[temp] != 0)
                         printf(" %d", FinalMap[i]->BusNum[3]);
                 }
 
                 printf(" %s ", FinalMap[i]->name);
                 for (int temp = 0; temp < 4; temp++)
                 {
                     temp_bus_station[temp] = 0;
                 }
             }
         }
         printf("\n");
         printf("\n");
         /////////////////////操作打印一条线路//////////////////////////////
         StartStation->flag = 0;
         (*ptr_map)--;
         return;
     }
     //函数递归
     if (StartStation->next[0] != NULL && StartStation->next[0] != ComingStatio && *ptr_map < 98 && StartStation->next[0]->flag == 0)
     {
         DFSFinding(StartStation, StartStation->next[0], FinalStation, MyStack, FinalMap, ptr_stack, ptr_map);
     }
     if (StartStation->next[1] != NULL && StartStation->next[1] != ComingStatio && *ptr_map < 98 && StartStation->next[1]->flag == 0)
     {
         DFSFinding(StartStation, StartStation->next[1], FinalStation, MyStack, FinalMap, ptr_stack, ptr_map);
     }
     if (StartStation->next[2] != NULL && StartStation->next[2] != ComingStatio && *ptr_map < 98 && StartStation->next[2]->flag == 0)
     {
         DFSFinding(StartStation, StartStation->next[2], FinalStation, MyStack, FinalMap, ptr_stack, ptr_map);
     }
     if (StartStation->next[3] != NULL && StartStation->next[3] != ComingStatio && *ptr_map < 98 && StartStation->next[3]->flag == 0)
     {
         DFSFinding(StartStation, StartStation->next[3], FinalStation, MyStack, FinalMap, ptr_stack, ptr_map);
     }
     if (StartStation->front[0] != NULL && StartStation->front[0] != ComingStatio && *ptr_map < 98 && StartStation->front[0]->flag == 0)
     {
         DFSFinding(StartStation, StartStation->front[0], FinalStation, MyStack, FinalMap, ptr_stack, ptr_map);
     }
     if (StartStation->front[1] != NULL && StartStation->front[1] != ComingStatio && *ptr_map < 98 && StartStation->front[1]->flag == 0)
     {
         DFSFinding(StartStation, StartStation->front[1], FinalStation, MyStack, FinalMap, ptr_stack, ptr_map);
     }
     if (StartStation->front[2] != NULL && StartStation->front[2] != ComingStatio && *ptr_map < 98 && StartStation->front[2]->flag == 0)
     {
         DFSFinding(StartStation, StartStation->front[2], FinalStation, MyStack, FinalMap, ptr_stack, ptr_map);
     }
     if (StartStation->front[3] != NULL && StartStation->front[3] != ComingStatio && *ptr_map < 98 && StartStation->front[3]->flag == 0)
     {
         DFSFinding(StartStation, StartStation->front[3], FinalStation, MyStack, FinalMap, ptr_stack, ptr_map);
     }
     StartStation->flag = 0;
     (*ptr_map)--;
     return;
 }


void BastChoice(StationNode* ComingStatio, StationNode* StartStation, StationNode* FinalStation, StationNode* MyStack[], StationNode* FinalMap[], int* ptr_stack, int* ptr_map)
 {
     StartStation->flag = 1;
     FinalMap[*ptr_map] = StartStation;
     (*ptr_map)++;
     if (StartStation == FinalStation)
     {
         no_finding_flag = 0;
         int time = 0;
         for (int i = 0; i < *ptr_map; i++)
         {
             time += FinalMap[i]->time;
         }

         if (time < type_time)
         {
             for (int i = 0; i < 100; i++)
             {
                 BastFinalMap[i] = NULL;
             }
             type_time = time;
             for (int i = 0; i < *ptr_map; i++)
             {
                 BastFinalMap[i] = FinalMap[i];//记录耗时最短线时间
             }
         }

         StartStation->flag = 0;
         (*ptr_map)--;
         return;
     }
     //函数递归
     if (StartStation->next[0] != NULL && StartStation->next[0] != ComingStatio && *ptr_map < 98 && StartStation->next[0]->flag == 0)
     {
         BastChoice(StartStation, StartStation->next[0], FinalStation, MyStack, FinalMap, ptr_stack, ptr_map);
     }
     if (StartStation->next[1] != NULL && StartStation->next[1] != ComingStatio && *ptr_map < 98 && StartStation->next[1]->flag == 0)
     {
         BastChoice(StartStation, StartStation->next[1], FinalStation, MyStack, FinalMap, ptr_stack, ptr_map);
     }
     if (StartStation->next[2] != NULL && StartStation->next[2] != ComingStatio && *ptr_map < 98 && StartStation->next[2]->flag == 0)
     {
         BastChoice(StartStation, StartStation->next[2], FinalStation, MyStack, FinalMap, ptr_stack, ptr_map);
     }
     if (StartStation->next[3] != NULL && StartStation->next[3] != ComingStatio && *ptr_map < 98 && StartStation->next[3]->flag == 0)
     {
         BastChoice(StartStation, StartStation->next[3], FinalStation, MyStack, FinalMap, ptr_stack, ptr_map);
     }
     if (StartStation->front[0] != NULL && StartStation->front[0] != ComingStatio && *ptr_map < 98 && StartStation->front[0]->flag == 0)
     {
         BastChoice(StartStation, StartStation->front[0], FinalStation, MyStack, FinalMap, ptr_stack, ptr_map);
     }
     if (StartStation->front[1] != NULL && StartStation->front[1] != ComingStatio && *ptr_map < 98 && StartStation->front[1]->flag == 0)
     {
         BastChoice(StartStation, StartStation->front[1], FinalStation, MyStack, FinalMap, ptr_stack, ptr_map);
     }
     if (StartStation->front[2] != NULL && StartStation->front[2] != ComingStatio && *ptr_map < 98 && StartStation->front[2]->flag == 0)
     {
         BastChoice(StartStation, StartStation->front[2], FinalStation, MyStack, FinalMap, ptr_stack, ptr_map);
     }
     if (StartStation->front[3] != NULL && StartStation->front[3] != ComingStatio && *ptr_map < 98 && StartStation->front[3]->flag == 0)
     {
         BastChoice(StartStation, StartStation->front[3], FinalStation, MyStack, FinalMap, ptr_stack, ptr_map);
     }
     StartStation->flag = 0;
     (*ptr_map)--;
     return;
 }


// 遍历文件
int FileOpen()
{
    FILE* file = fopen("E:\\code\\c\\bus_station_finding\\bus_station.txt", "r");
    if (file == NULL)
    {
        printf("File open fail.\n");
        return 1;
    }

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), file) != NULL)  // 逐行读取
    {
        printf("%s", buffer); // 输出当前行
    }

    fclose(file);
}
// 判断输入格式是否正确
void safe_input(int* num, char* name, int* time) 
{
    int result;
    do {
        printf("Please input according to the format(example:732 ChangAnQiCheZhan 2)\n");
        result = scanf("%d %49s %d", num, name, time); // 限制字符串长度防止溢出

        // 清空输入缓冲区（处理多余字符）
        int c;
        while ((c = getchar()) != '\n' && c != EOF); // 清空直到换行符或文件尾

        if (result != 3) {
            printf("The type is wrong, please re-enter.\n");
        }
    } while (result != 3); // 直到输入正确才退出循环
}
// 增加线路
void AddWay()
{
    FILE* file = fopen("E:\\code\\c\\bus_station_finding\\bus_station.txt", "a");  // "a" 表示追加（不覆盖原有内容）
    if (file == NULL) {
        perror("File open fail.");
        return;
    }
    int num = 0;
    char name[30];
    int time;
    safe_input(&num, name, &time);
    fprintf(file, "%d %s %d\n",num,name,time);
    printf("Adding successful.");
    fclose(file);
}


// 删除指定线路（直接操作文件）
void DeleteLineDirectly(const char* filename, int target_line) 
{
    FILE* src_file = fopen(filename, "r");
    if (!src_file) 
    {
        perror("File open fail.");
        exit(EXIT_FAILURE);
    }

    // 创建临时文件
    FILE* tmp_file = fopen("temp.txt", "w");
    if (!tmp_file) 
    {
        perror("File can't copy temp file.");
        fclose(src_file);
        exit(EXIT_FAILURE);
    }

    char buffer[256];
    int deleted = 0;

    // 逐行读取并筛选
    while (fgets(buffer, sizeof(buffer), src_file) != NULL) 
    {
        int current_line;
        char station_name[50];
        int time;

        // 解析线路号（只检查第一个数字）
        if (sscanf(buffer, "%d", &current_line) != 1) 
        {
            // 格式错误行直接保留（可根据需求调整）
            fputs(buffer, tmp_file);
            continue;
        }

        // 保留非目标线路的数据
        if (current_line != target_line) 
        {
            fputs(buffer, tmp_file);
        }
        else 
        {
            deleted = 1; // 标记有数据被删除
        }
    }

    fclose(src_file);
    fclose(tmp_file);

    // 只有成功删除时才替换文件
    if (deleted) 
    {
        remove(filename);               // 删除原文件
        rename("temp.txt", filename);   // 临时文件重命名
        printf("Bus %d already delate.\n", target_line);
    }
    else 
    {
        remove("temp.txt");            // 清理临时文件
        printf("Not finding %d.\n", target_line);
    }
}

// 动态删除线路
void DelateWay()
{
    printf("Please enter the bus num you want to delate:\n");
    int num = 0;
    scanf("%d", &num);
    DeleteLineDirectly("E:\\code\\c\\bus_station_finding\\bus_station.txt",num);
}

int main() 
{
    StationNode* id_head = NULL;
    while (1)
    {
        ShowMenu();
        int i = 0;
        printf("Enter the num >> ");
        scanf("%d", &i);
        switch (i)
        {
        case 0://退出程序
            printf("Look forward to meeting next time.\n");
            printf(".\n");
            printf(".\n");
            printf(".\n");
            printf(".\n");
            printf(".\n");
            printf(".\n");
            printf(".\n");
            return 0;
            break;
        case 1://构建线路
            id_head = BuildingWay();
            break;
        case 2://查找所有路线
            no_finding_flag=1;
            FindingWay(id_head,1);
            if (no_finding_flag)
            {
                printf("No founding the way to your destination.\n");
            }
            break;
        case 3://最优查找
            no_finding_flag = 1;
            FindingWay(id_head, 2);
            if (no_finding_flag)
            {
                printf("No founding the way to your destination.\n");
            }
            break;
        case 4://增加线路
            AddWay();
            break;
        case 5://删除线路
            DelateWay();
            break;
        case 6://全路线展示
            FileOpen();
            break;
        case 7://清除操作台
            system("cls");
            break;
        default://error
            printf("The type is wrong, please re-enter.\n");
            break;
        }
    }
    return 0;
}