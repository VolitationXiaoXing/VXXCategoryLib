//
//  NSString+SandBox.h
//  ASynchronizeDownLoadImageDemo
//
//  Created by 王坤 on 16/6/17.
//  Copyright © 2016年 wangkun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (SandBox)

-(instancetype)filePathForCacheDirectory;

-(instancetype)filePathForDocumentDirectory;

-(instancetype)filePathForTemp;

-(instancetype)fileName;

@end
