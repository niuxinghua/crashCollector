# HaierCrashTracer

在appdelegate里面

#import "Collector.h"

将lib文件拉到工程里面，copy item if need选中，到mcloud平台里面找到自己的appid

- ```
  - (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
  [[Collector sharedCollector] registerHandlerWithAppId:@"yourappid"];
  }
  ```

就可以在mcloud的统计里面看到自己app的崩溃日志了

enjoy yourself