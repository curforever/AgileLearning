## 常见机器学习算法

[TOC]

### 判别分类

> [(6条消息) 线性判别准则和线性分类算法_隨心ξ所欲的博客-CSDN博客_线性分类算法](https://blog.csdn.net/qq_53085567/article/details/121170475?ops_request_misc=&request_id=&biz_id=102&utm_term=判别分类&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-0-121170475.142^v10^pc_search_result_control_group,157^v4^control&spm=1018.2226.3001.4187)

1. 线性分类 vs非线性分类

```
是否存在一个线性方程可以把待分类数据分开，表达式为y=wx。
线性分类一般方法：感知器，最小二乘法。
```

2. LDA

```
在模式识别领域（如人脸识别）中有广泛应用
在自然语言处理领域，LDA是隐含狄利克雷分布（Latent DIrichlet Allocation，简称LDA），它是一种处理文档的主题模型。
```

3. **线性判别式分析**(Linear Discriminant Analysis, LDA)，也叫做**Fisher线性判别**(Fisher Linear Discriminant ,FLD)

```
思想：将高维的模式样本 投影到 最佳鉴别矢量空间，以抽取分类信息和压缩特征空间
特点：投影后有最小的类内距离和最大的类间距离（最佳的可分离性）
```



### 聚类

> [(8条消息) 数据挖掘之聚类_花花生的博客-CSDN博客_数据挖掘聚类](https://blog.csdn.net/a_d_e/article/details/113764188)

1. ```
   分类：有监督有标签
   聚类：无监督无标签
   ```

2. 应用

   ```
   - 客户划分：”大数据杀熟“。
   - 社区发现：发现社交网络中相似的用户。
   - 地震带绘制： 将同一个簇中的地震点看做地震带。
   - 图像分割 ： 将图像上的像素点聚类成区域完成分割。
   ```

3. 算法

   1. kmeans

      ```
      优点：圆形分布的数据能够较快的收敛。
      缺点：K值不好确定；可能会收敛到局部最优；对噪点敏感；不适用于非球形分布的数据。
      ```

   2. Sequential Leader Cluster

      ```
      将新来的数据点根据其到已有的聚类的距离分配到其中，若距离超过某个阈值，则单独分为一个新类别。
      ```

   3. 基于模型：高斯混合模型

   4. 基于密度：DBSCAN

      ```
      核心点：处于密度较高位置的点；
      边界点：能够从核心点触发在某种密度下到达的点；
      噪点：不属于上述两种的数据点。
      ```

   5. 层次聚类 Hierarchical Clustering

      ```
      可以根据需要在不同的层次裁剪结果，得到不同的聚类个数。
      ```

      



### SVM向量机



### 决策树



### Adaboost