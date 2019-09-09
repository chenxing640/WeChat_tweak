//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIPercentDrivenInteractiveTransition;

@interface WCStoryDismissInteractiveTransition : NSObject
{
    UIPercentDrivenInteractiveTransition *m_interactivePopTransition;
    id <WCStoryDismissInteractiveTransitionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCStoryDismissInteractiveTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleDragDownInteractivePopGesture:(id)arg1;
- (void)handlePopBackInteractivePopGesture:(id)arg1;
- (void)handlePopGesWithState:(long long)arg1 progress:(double)arg2 isSweepFastBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) UIPercentDrivenInteractiveTransition *interactivePopTransition; // @synthesize interactivePopTransition=m_interactivePopTransition;
@property(readonly, nonatomic) _Bool isInteracting;

@end
