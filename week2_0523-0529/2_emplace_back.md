# emplace_back与push_back



> BV1q7411x7RK



## 一、区别

|      | push_back  | emplace_back |
| :--: | :--------: | :----------: |
| 传递 |    对象    |     参数     |
| 调用 | 构造、拷贝 |     构造     |



## 二、注意

`emplace`需要参数对象有对应的**构造函数**且**参数匹配**，不然编译报错