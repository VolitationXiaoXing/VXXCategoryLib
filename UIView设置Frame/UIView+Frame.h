//
//  VXXUIView+Frame.h
//  VolitationXiaoXing
//
//  Created by Volitation小星 on 16/9/8.
//  Copyright © 2016年 VolitationXiaoXing All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Frame)

@property (nonatomic, assign) CGFloat x;

@property (nonatomic, assign) CGFloat y;

@property (nonatomic, assign) CGFloat width;

@property (nonatomic, assign) CGFloat height;

@property (nonatomic, assign) CGSize size;

@property (nonatomic, assign) CGPoint origin;

@property (nonatomic, assign) CGFloat centerX;

@property (nonatomic, assign) CGFloat centerY;

@property (nonatomic, assign) CGFloat bottom;

@property (nonatomic, assign) CGFloat top;

- (UIImage *)screenshot;

- (UIImage *)screenshotWithRect:(CGRect)rect;

@end
