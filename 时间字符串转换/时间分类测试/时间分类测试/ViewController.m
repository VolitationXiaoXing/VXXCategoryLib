//
//  ViewController.m
//  时间分类测试
//
//  Created by Volitation小星 on 16/9/8.
//  Copyright © 2016年 VolitationXiaoXing. All rights reserved.
//

#import "ViewController.h"
#import "NSDate+Utils.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSString* time = @"2016年01月01日";
    
    NSDate* date = [NSDate dateFromString:time withFormat:@"yyyy年MM月dd日"];
    
    NSLog(@"%@",date);
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
