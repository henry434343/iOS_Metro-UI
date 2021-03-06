//
//  Setting.h
//  MetroUI
//
//  Created by Henry Kung on 2014/6/6.
//  Copyright (c) 2014年 Henry Kung. All rights reserved.
//

#import <Foundation/Foundation.h>

#define IS_IOS7 [[UIDevice currentDevice].systemVersion hasPrefix:@"7"]

#define statusBar 20
#define navigationBar 44

#define topBarHeight IS_IOS7 ? 0 : 0

#define rowCount 4
#define columnCount 6

typedef enum {
    min,
    mid_width,
    mid_height,
    max
}ItemSize;

typedef enum {
    Operator_reSizeItem,
    Operator_moveItem
}ItemOperator;

typedef enum {
    switchMode,
    editMode
}ItemActionMode;

@interface Setting : NSObject

@end
