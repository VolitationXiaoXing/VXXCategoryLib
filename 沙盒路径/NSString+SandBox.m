//
//  NSString+SandBox.m
//  ASynchronizeDownLoadImageDemo
//
//  Created by 王坤 on 16/6/17.
//  Copyright © 2016年 wangkun. All rights reserved.
//

#import "NSString+SandBox.h"

@implementation NSString (SandBox)

-(instancetype)filePathForCacheDirectory{
    
    return [[NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) lastObject] stringByAppendingPathComponent:[self lastPathComponent]];
}

-(instancetype)filePathForDocumentDirectory{
    
    return [[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject] stringByAppendingPathComponent:[self lastPathComponent]];

}

-(instancetype)filePathForTemp{

    return [NSTemporaryDirectory() stringByAppendingPathComponent:[self lastPathComponent]];
}

-(instancetype)fileName{
    return [self lastPathComponent];
}

@end
