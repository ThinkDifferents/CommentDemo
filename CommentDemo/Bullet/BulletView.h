//
//  BulletView.h
//  CommentDemo
//
//  Created by Shi wei on 16/2/20.
//  Copyright © 2016年 Shi wei. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, CommentMoveStatus) {
    Start,
    Enter,
    End
    
};

typedef NS_ENUM(NSInteger, Trajectory) {
    Trajectory_1,
    Trajectory_2,
    Trajectory_3
};

@interface BulletView : UIView
@property (nonatomic, copy) void(^moveBlock)(CommentMoveStatus status);
@property Trajectory trajectory; //弹幕弹道定义

- (instancetype)initWithContent:(NSString *)content;
- (void)startAnimation;
- (void)stopAnimation;
@end
