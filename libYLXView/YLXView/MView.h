//
//  WQView.h
//  Link
//
//  Created by aaa on 15/8/31.
//  Copyright (c) 2015年 51sole. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIView+Addtions.h"

#define IMAGE_2(image)               [UIImage imageNamed:image]

typedef void(^MySliderViewTouchBlock)(UISlider *slier);


@interface MView : UIView

@property(nonatomic,assign)id delegate;//用于每次点击动作之后的回调代理类
@property(assign) SEL didFinishSelector; //每次点击动作之后的回调方法

-(void)setMView;

@end

@interface MButton : UIButton
@property(nonatomic,strong)UIImageView *ImageView;
@property(nonatomic,strong)UILabel *Label;

-(void)setLabelFont:(UIFont*)font;
- (void)initImage:(NSString*)image initLabel:(NSString*)label;
- (id)initWithFrame:(CGRect)frame initImage:(NSString*)image initLabel:(NSString*)label;
-(void)relayoutViewType:(NSString *)type imageSize:(CGFloat)imageW;

@end

@interface MySliderView : UISlider
@property(nonatomic,copy)MySliderViewTouchBlock mySliderViewTouchBlock;

-(void)setMView;
@end



