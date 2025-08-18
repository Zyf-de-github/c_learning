#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>



#include <stdio.h>
#include <stdlib.h>

void build_post_order(int i, int n, int pos[], int* index) {
    if (i > n) {
        return;
    }
    build_post_order(2 * i, n, pos, index);
    build_post_order(2 * i + 1, n, pos, index);
    pos[(*index)++] = i;
}

int main() {
    int n;
    scanf("%d", &n);
    int post[32];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &post[i]);
    }

    int pos_arr[32];
    int idx = 0;
    build_post_order(1, n, pos_arr, &idx);

    int ans[33];
    for (int i = 0; i < n; ++i) {
        ans[pos_arr[i]] = post[i];
    }

    for (int i = 1; i <= n; ++i) {
        printf("%d", ans[i]);
        if (i < n) {
            printf(" ");
        }
    }

    return 0;
}





//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct Tree {
//    int val;
//    struct Tree* left;
//    struct Tree* right;
//} Tree;
//
//Tree* buildTree(int* last, int* in, int n) {
//    if (n <= 0) return NULL;  // 处理空子树的情况
//    Tree* root = (Tree*)malloc(sizeof(Tree));
//    root->val = last[n-1];  // 前序第一个元素为根节点
//    root->left = root->right = NULL;
//
//    // 在中序序列中找到根节点的位置
//    int i;
//    for (i = 0; i < n; i++) {
//        if (in[i] == last[n-1]) break;
//    }
//
//    // 递归构建左子树和右子树
//    root->left = buildTree(last, in, i);  // 左子树前序起始位置为pre+1，长度为i
//    root->right = buildTree(last + i, in + i + 1, n - i - 1);  // 右子树前序起始位置为pre+i+1，长度为n-i-1
//    return root;
//}
//
//void getTree(Tree* root,int* arr,int n) {
//    if (root == NULL)return;
//    arr[n] = root->val;
//    getTree(root->left, arr, 2 * n);
//    getTree(root->right, arr, 2 * n + 1);
//}
//
//int main() {
//    int n;
//    int last[32] = { 0 }, in[32] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &last[i]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &in[i]);
//    }
//    Tree* root = buildTree(last, in, n);
//    int arr[32] = { 0 };
//    getTree(root, arr, 1);
//    printf("%d", arr[1]);
//    for (int i = 2; i<32; i++)
//    {
//        if (arr[i] == 0)continue;
//        printf(" %d", arr[i]);
//    }
//    return 0;
//}





//typedef struct Tree {
//    char val;
//    struct Tree* left;
//    struct Tree* right;
//} Tree;
//
//Tree* buildTree(char* pre, char* in, int n) {
//    if (n <= 0) return NULL;  // 处理空子树的情况
//    Tree* root = (Tree*)malloc(sizeof(Tree));
//    root->val = pre[0];  // 前序第一个元素为根节点
//    root->left = root->right = NULL;
//
//    // 在中序序列中找到根节点的位置
//    int i;
//    for (i = 0; i < n; i++) {
//        if (in[i] == pre[0]) break;
//    }
//
//    // 递归构建左子树和右子树
//    root->left = buildTree(pre + 1, in, i);  // 左子树前序起始位置为pre+1，长度为i
//    root->right = buildTree(pre + i + 1, in + i + 1, n - i - 1);  // 右子树前序起始位置为pre+i+1，长度为n-i-1
//    return root;
//}
//
//int getHeight(Tree* root) {
//    if (root == NULL) return 0;  // 空树高度为0
//    int left = getHeight(root->left);
//    int right = getHeight(root->right);
//    return (left > right ? left : right) + 1;  // 当前树高度为左右子树最大高度+1
//}
//
//int main() {
//    int n;
//    char pre[51], in[51];
//    scanf("%d", &n);
//    scanf("%s%s", pre, in);
//    Tree* root = buildTree(pre, in, n);
//    printf("%d\n", getHeight(root));
//    return 0;
//}






//#define MAXN 55
//typedef struct Tree
//{
//    char vel;
//    struct Tree* left;
//    struct Tree* right;
//}Tree;
//
//Tree* BuildTree(char* persort, char* midsort,int n)
//{
//    if (n == 0)
//    {
//        return NULL;
//    }
//    Tree* root = NULL;
//    root = (Tree*)malloc(sizeof(Tree));
//    root->vel = 0;
//    root->left = NULL;
//    root->right = NULL;
//    //TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
//    int i = 0;
//    while (persort[0]!=midsort[i])
//    {
//        i++;
//    }
//    root->vel = persort[0];
//    root->left = BuildTree(persort + 1, midsort, i);
//    root->right = BuildTree(persort + i + 1, midsort + i + 1, n - i - 1);
//    return root;
//}
//
//int main()
//{
//    int n;
//    char persort[MAXN] = { 0 };
//    char midsort[MAXN] = { 0 };
//    scanf("%d", &n);
//    scanf("%s", &persort);
//    scanf("%s", &midsort);
//    Tree* root = BuildTree(persort, midsort, n);
//    return 0;
//}
//// 二叉树节点结构体
//typedef struct TreeNode {
//    char val;
//    struct TreeNode* left;
//    struct TreeNode* right;
//} TreeNode;
//
//// 根据前序和中序构建二叉树
//TreeNode* buildTree(char* preorder, char* inorder, int n) {
//    if (n == 0) return NULL;
//
//    TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
//    root->val = preorder[0];
//    root->left = root->right = NULL;
//
//    // 在中序中找到根节点的位置
//    int idx = 0;
//    while (idx < n && inorder[idx] != preorder[0]) {
//        idx++;
//    }
//
//    // 递归构建左子树和右子树
//    root->left = buildTree(preorder + 1, inorder, idx);
//    root->right = buildTree(preorder + 1 + idx, inorder + idx + 1, n - idx - 1);
//
//    return root;
//}
//
//// 计算二叉树高度
//int getHeight(TreeNode* root) {
//    if (!root) return 0;
//    int left = getHeight(root->left);
//    int right = getHeight(root->right);
//    return (left > right ? left : right) + 1;
//}
//
//int main() {
//    int n;
//    char preorder[MAXN], inorder[MAXN];
//    scanf("%d", &n);
//    scanf("%s", preorder);
//    scanf("%s", inorder);
//
//    TreeNode* root = buildTree(preorder, inorder, n);
//    int height = getHeight(root);
//    printf("%d\n", height);
//
//    return 0;
//}