# algorithm
c语言的一些算法习题

1.给出一个字符串 A，表示一个 n 位正整数, 删除其中 k 位数字, 使得剩余的数字仍然按照原来的顺序排列产生一个新的正整数。写一个函数找到删除 k 个数字之后的最小正整数。其中 N <= 240，k <= N。

格式：

输入行依次输入一个字符串代表的正整数 A 和一个整数 k，最后输出删除 k 个数字之后的最小正整数。

样例输入
A = 178542
k = 4

样例输出：12


2.给你一个二维矩阵，权值为 False 和 True，False 为0，true 为1写一个函数找到一个最大的矩形，使得里面的值全部为True，并输出它的面积。

格式：

第一行输入一个二维 01 数组，最后输出子矩阵中值全为 True 的面积最大的矩形，最后输出矩形的面积。

样例输入：
[
  [ 1, 1, 0, 0, 1 ]，
  [ 0, 1, 0, 0, 1 ]，
  [ 0, 0, 1, 1, 1 ]，
  [ 0, 0, 1, 1, 1 ]，
  [ 0, 0, 0, 0, 1 ]
]

样例输出：6

3.给定一个m×n矩阵，如果一个元素是0，则将其所在行和列全部元素变成0。并要求需要在原矩阵上完成操作。写一个函数实现次功能。

格式：

输入行依次输入一个初试矩阵，最后输出经过转换后的数组。

样例输入

[
[ 1，2 ]，
[ 0，3 ]
]


样例输出

[
[ 0，2 ]，
[ 0，0 ]
]


4.给一个包含 n 个整数的数组 num，写一个函数找到和与给定整数 target 最接近的三元组，返回这三个数的和。

注意事项：
只需要返回三元组之和，无需返回三元组本身。

格式：

输入行依次输入一个整数数组 num 和一个给定的整数 target，最后输出和与 target 最接近的三元组的和。

样例输入

num = [ -1，2，1，-4 ]
target = 1

样例输出

2   // -1 + 2 + 1 = 2

5.给出一个有 n 个整数的数组 S，在 S 中找到三个整数 a, b, c，使得 a + b + c = 0。写一个函数找到所有满足要求的三元组。

注意事项：
在三元组(a, b, c)，要求a <= b <= c。结果不能包含重复的三元组。

格式：

输入行输入一个有 n 个整数的数组 S，最后输出所有满足要求的三元组。

样例输入

S = [ -1，0，1，2，-1，-4 ]

样例输出

( -1, 0, 1 )
( -1, -1, 2 )


6.写一个函数分割一个整数数组，使得奇数在前偶数在后。

挑战：

在原数组中完成，不使用额外空间。


格式：

输入行输入一个整数数组，最后输出分割后的数组。

样例输入
[ 1， 2，3，4 ]



样例输出
[ 1，3，2，4 ]

7. 有 n 个气球，编号为 0到 n-1，每个气球都有一个分数，存在 nums 数组中。每次吹气球i可以得到的分数为 nums[left] * nums[i] * nums[right]，left 和 right 分别表示i气球相邻的两个气球。当i气球被吹爆后，其左右两气球即为相邻。要求吹爆所有气球，得到最多的分数。写一个函数求出最后的分数。



格式：



输入第一行输入一个气球分数的数组，最后输出分数的大小。



样例输入



[ 4，1，5，10 ]
样例输出




270




