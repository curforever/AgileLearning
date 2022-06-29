# 1_Maven常用指令

`mvn clean`	删除target目录下编译的内容
`mvn compile`	编译
`mvn test`	测试
`mvn package`	打包文件并存放到项目的target目录下（打包好的文件通常都是编译后的class文件）
`mvn install`	在本地仓库生成仓库的安装包，可供其他项目引用，同时打包后的文件放到项目的target目录下



## 常见问题

### 1.mvn clean install 和 mvn install 的区别

根据maven在执行一个生命周期命令时，理论上讲，不做mvn install 得到的jar包应该是最新的，除非使用其他方式修改jar包的内容，但没有修改源代码
平时可以使用mvn install ，不使用clean会节省时间，但是最保险的方式还是mvn clean install，这样可以**生成最新的jar包或者其他包**

### 2.maven两种跳过单元测试方法的区别

`mvn package -Dmaven.test.skip=true`
不但跳过了单元测试的运行，**同时也跳过了测试代码的编译**

`mvn package -DskipTests`
跳过单元测试，但是**会继续编译**。

如果没时间修改单元测试的bug，或者单元测试编译错误，则使用第一种，不要使用第二种