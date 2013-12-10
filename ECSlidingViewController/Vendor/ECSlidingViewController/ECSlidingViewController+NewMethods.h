//
//  ECSlidingViewController+NewMethods.h
//  Bloglovin
//
//  Created by Billy Ohgren on 12/9/13.
//  Copyright (c) 2013 Bloglovin. All rights reserved.
//

#import "ECSlidingViewController.h"

@interface ECSlidingViewController (NewMethods)


/**
 Anchors the `topViewController`'s view to the right side of the container to reveal the `underLeftViewController`'s view.
 
 @param animated Specify `YES` to animate the transition or `NO` if you do not want the transition to be animated.
 */
- (void)anchorTopViewToRightAnimated:(BOOL)animated;

/**
 Anchors the `topViewController`'s view to the right side of the container to reveal the `underLeftViewController`'s view.
 
 @param animated Specify `YES` to animate the transition or `NO` if you do not want the transition to be animated.
 @param complete A completion handler.
 */
- (void)anchorTopViewToRightAnimated:(BOOL)animated onComplete:(void (^)())complete;

/**
 Anchors the `topViewController`'s view to the left side of the container to reveal the `underRightViewController`'s view.
 
 @param animated Specify `YES` to animate the transition or `NO` if you do not want the transition to be animated.
 */
- (void)anchorTopViewToLeftAnimated:(BOOL)animated;

/**
 Anchors the `topViewController`'s view to the left side of the container to reveal the `underRightViewController`'s view.
 
 @param animated Specify `YES` to animate the transition or `NO` if you do not want the transition to be animated.
 @param complete A completion handler.
 */
- (void)anchorTopViewToLeftAnimated:(BOOL)animated onComplete:(void (^)())complete;

/**
 Resets the `topViewController`'s view's position to the middle. Completely covers any view that was underneath it.
 
 @param animated Specify `YES` to animate the transition or `NO` if you do not want the transition to be animated.
 */
- (void)resetTopViewAnimated:(BOOL)animated;

/**
 Resets the `topViewController`'s view's position to the middle. Completely covers any view that was underneath it.
 
 @param animated Specify `YES` to animate the transition or `NO` if you do not want the transition to be animated.
 @param complete A completion handler.
 */
- (void)resetTopViewAnimated:(BOOL)animated onComplete:(void(^)())complete;


@end
