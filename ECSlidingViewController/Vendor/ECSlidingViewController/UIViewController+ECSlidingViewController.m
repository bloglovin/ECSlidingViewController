//
//  UIViewController+ECSlidingViewController.m
//  Bloglovin
//
//  Created by Billy Ohgren on 12/9/13.
//  Copyright (c) 2013 Bloglovin. All rights reserved.
//

#import "UIViewController+ECSlidingViewController.h"

@implementation UIViewController (ECSlidingViewController)

- (ECSlidingViewController *)slidingViewController {
    UIViewController *viewController = self.parentViewController ? self.parentViewController : self.presentingViewController;
    while (!(viewController == nil || [viewController isKindOfClass:[ECSlidingViewController class]])) {
        viewController = viewController.parentViewController ? viewController.parentViewController : viewController.presentingViewController;
    }
    
    return (ECSlidingViewController *)viewController;
}

@end
