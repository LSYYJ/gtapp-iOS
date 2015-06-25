# gtapp-iOS
gtapp-iOS-OC-demo


	1.	gt-iOS-sdk 极验验证iOS版本的SDK，是一个基于i386、x86_64、armv7、 armv7s、arm64的Static Library，支持iOS7.0＋。开发使用的Xcode版本位Xcode 6.3.1。
	2.	gt-iOS-sdk-demo 调用sdk的演示app程序。
	3.	直接运行TestGT项目 
	4.	演示项目提供了完整的一次验证，并将客户端验证结果向示例的客户服务器上发起二次验证的完整通讯过程。
	5.	二次验证试用MKNetworkKit，可根据项目需要试用其他方式。

	使用以上步骤，用户可以运行Demo示例。
	自建项目引用
	假设用户自建项目名称为：TestGT
	1.	在极验官方主页www.geetest.com注册账号并申请相应的应用公钥，id:{{id}}
	2.	将gt-iOS-sdk中的静态库GTFramework.framework引入到项目中
	3.	将GTFramework.framework项目以Static Library的方式进行引用。将所需的GTFramework.framework拷贝到工程所在文件夹下。在 TARGETS->Build Phases-> Link Binary With Libaries中点击“+”按钮，在弹出的窗口中点击“Add Other”按钮，选择GTFramework.framework文件添加到工程中。
	4.	在项目三处TODO中替换成用户自已的处理代码。
	
	回调Block
	Block：
	^(NSString *code, NSDictionary *result, NSString *message) {} 
	返回值：
	1.code 成功或者失败的值（1：成功/其他：失败）
	2.message 成功或者失败的信息（success/fail）
	3.result 详细的返回信息，用于向客户服务器提交之后的SDK二次验证信息 
		{
		 "geetest_challenge": "5a8c21e206f5f7ba4fa630acf269d0ec4z",
		 "geetest_validate": "f0f541006215ac784859e29ec23d5b97",
		 "geetest_seccode": "f0f541006215ac784859e29ec23d5b97|jordan"
		 }
