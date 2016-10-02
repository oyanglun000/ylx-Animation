//
//  PLCircle.h
//  DrawCirclePercent
//
//  Created by liu poolo on 14-4-1.
//  Copyright (c) 2014年 liu poolo. All rights reserved.
//

#import <UIKit/UIKit.h>

#define PL_SLIDER_BG_LINE_WIDTH 40.0f
#define PL_SLIDER_LINE_WIDTH 40.0f
#define PL_SLIDER_WIDTH 260.0f
#define PL_SLIDER_WIDTH_4s 260.0f

#define _jcRadiu0_1 40.0f  //圆形缺口的一半

typedef void(^PLCircleBlock)(int value);


@interface PLCircle1 : UIControl
@property (nonatomic,assign) int angle;
@property (nonatomic,copy)PLCircleBlock pLCircleBlock;
@property (nonatomic,strong)NSString *equipmentValue;  //当前设备的值


@end
