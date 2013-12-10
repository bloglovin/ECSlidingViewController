//
//  ECSlidingViewController+NewMethods.m
//  Bloglovin
//
//  Created by Billy Ohgren on 12/9/13.
//  Copyright (c) 2013 Bloglovin. All rights reserved.
//

#import "ECSlidingViewController+NewMethods.h"

@implementation ECSlidingViewController (NewMethods)

- (void)anchorTopViewToLeftAnimated:(BOOL)animated {
    [self anchorTopViewTo:ECLeft];
}

- (void)anchorTopViewToLeftAnimated:(BOOL)animated onComplete:(void (^)())complete {
    [self anchorTopViewTo:ECLeft animations:nil onComplete:complete];
}

- (void)anchorTopViewToRightAnimated:(BOOL)animated {
    [self anchorTopViewTo:ECRight];
}

- (void)anchorTopViewToRightAnimated:(BOOL)animated onComplete:(void (^)())complete {
    [self anchorTopViewTo:ECRight animations:nil onComplete:complete];
}

- (void)resetTopViewAnimated:(BOOL)animated {
    [self resetTopView];
}

- (void)resetTopViewAnimated:(BOOL)animated onComplete:(void (^)())complete {
    [self resetTopViewWithAnimations:nil onComplete:complete];
}

@end
