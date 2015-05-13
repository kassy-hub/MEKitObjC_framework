//
//  UIViewController+Enhanced.h
//  MEKitObjC
//
//  Created by Mitsuharu Emoto on 2013/11/08.
//  Copyright (c) 2013年 Mitsuharu Emoto. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (Enhanced)

/**
 @brief 最も前面にあるViewControllerを取得する
 @return UIViewControllerのインスタンス
 */
+(UIViewController*)topLayerViewController;

/**
 @brief "className"というStoryboardから"className"というidentifierのUIViewControllerを生成する
 */
+(UIViewController*)instantiateWithStoryboard;

+(UIViewController*)instantiateWithStoryboard:(NSString*)storyboard;

+(UIViewController*)instantiateWithStoryboard:(NSString*)storyboard
                                   identifier:(NSString*)identifier;



-(BOOL)isVisible;


@end

#pragma mark - Keyboard

@protocol MEOKeyboardNotification <NSObject>

@required
-(void)keyboardWillShow:(NSNotification*)notification;
-(void)keyboardWillHide:(NSNotification*)notification;

@optional
-(void)keyboardDidShow:(NSNotification*)notification;
-(void)keyboardDidHide:(NSNotification*)notification;

@end


@interface UIViewController (Keyboard)

-(void)addKeyboardNotification;
-(void)removeKeyboardNotification;
-(CGRect)keyboardRect:(NSNotification*)notification;
-(NSTimeInterval)keyboardDuration:(NSNotification*)notification;
-(UIViewAnimationCurve)keyboardCurve:(NSNotification*)notification;

@end

@interface UIViewController (NavigationControllerSwipeTransition)

-(void)disableNavigationControllerSwipeTransition;

@end
