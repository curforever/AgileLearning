# 6_堆排序：初始化vs调整堆



### 初始化

杂乱无序的数组构成完全二叉树，需要从第一个非叶节点开始与它的叶子节点进行比较，然后移动。

每一层的所有元素都要跟它的左右节点进行比较

这也就导致了它的时间复杂度不是logn

### 调整堆

从根节点开始进行左右节点的比较，选择一个较小的左节点或者有节点进行交换。

因为只破坏了一层的有序性，另外一边的子树的有序性没有遭到破坏，所以，另外一边不需要进行比较，所以，每一层只需要比较一次，一共logn层，需要比较logn次。

而一共会有n个这样的元素会被放到根节点进行这样的操作，得到n*logn