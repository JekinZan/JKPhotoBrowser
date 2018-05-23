//
//  JKPhotoBrowserStateProtocol.h
//  JKPhotoBrowser
//
//  Created by zhangjie on 2018/5/23.
//  Copyright © 2018年 zhangjie. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol JKPhotoBrowserStateProtocol <NSObject>
@property (nonatomic,assign) CGFloat progress;
- (void)showSuccessful;
- (void)showFail;
@end
