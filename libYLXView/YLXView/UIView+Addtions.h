//
//  UIView+Addtions.h
//
//  Created by  on 14-10-30.
//  Copyright (c) 2014年 yanglx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Addtions)

-(CGFloat)getX;
-(CGFloat)getY;
-(CGFloat)getWidth;
-(CGFloat)getHeight;
-(CGFloat)getCenterX;
-(CGFloat)getCenterY;

-(CGFloat)getXaddWidth;
-(CGFloat)getYaddHeight;

-(void)setX:(CGFloat)X;
-(void)setY:(CGFloat)Y;
-(void)setWidth:(CGFloat)Width;
-(void)setHeight:(CGFloat)Height;
-(void)setOriginX:(CGFloat)X originY:(CGFloat)Y;
-(void)setSize:(CGSize)size;
-(void)setBorderColor:(NSString*)color;

-(void)setYchange:(CGFloat)change;
-(void)setXchange:(CGFloat)change;
-(void)setWidthchange:(CGFloat)change;
-(void)setHeightchange:(CGFloat)change;

@property(nonatomic,readonly) CGFloat Height;
@property(nonatomic,readonly) CGFloat Width;

//图片不停的360旋转
-(void)CABasicAnimation_transform;
-(void)CABasicAnimation_transform2;
//view 旋转 方法3 有停止
-(void)CABasicAnimation_transform3:(BOOL)stop;
@end
