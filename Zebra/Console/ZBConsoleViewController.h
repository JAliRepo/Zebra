//
//  ZBConsoleViewController.h
//  Zebra
//
//  Created by Wilson Styres on 2/6/19.
//  Copyright © 2019 Wilson Styres. All rights reserved.
//

#define COMMAND_START 7

@class ZBQueue;

#import <UIKit/UIKit.h>
#import <Downloads/ZBDownloadDelegate.h>
#import <Database/ZBDatabaseDelegate.h>
#import <ZBConsoleCommandDelegate.h>
#import <ZBLogLevel.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZBConsoleViewController : UIViewController <ZBDownloadDelegate, ZBDatabaseDelegate, ZBConsoleCommandDelegate>

@property (nonatomic) BOOL externalInstall;
@property (strong, nonatomic) NSString *externalFilePath;
@end

NS_ASSUME_NONNULL_END
