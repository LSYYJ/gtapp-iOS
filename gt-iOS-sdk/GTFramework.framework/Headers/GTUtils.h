//
//  GTUtils.h
//  GTFramework
//
//  Created by LYJ on 15/5/18.
//  Copyright (c) 2015年 gt. All rights reserved.
//

#ifndef GTFramework_GTUtils_h
#define GTFramework_GTUtils_h

/**
 * 验证完成回调
 */
typedef void(^GTCallFinishBlock)(NSString *code, NSDictionary *result, NSString *message);

/**
 * 关闭验证
 */
typedef void(^GTCallCloseBlock)(void);

#endif
