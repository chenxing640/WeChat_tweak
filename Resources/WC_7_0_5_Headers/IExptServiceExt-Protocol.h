//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSString;

@protocol IExptServiceExt

@optional
- (void)onExptItemListChange;
- (void)onPageFlowConfigChange:(NSArray *)arg1 isDel:(_Bool)arg2;
- (void)onSessionConfigChange:(NSString *)arg1 isDel:(_Bool)arg2 needReport:(_Bool)arg3;
- (void)onSessionPageConfigChange:(NSString *)arg1 isDel:(_Bool)arg2 andSessionPageId:(unsigned int)arg3 needReport:(_Bool)arg4;
- (void)onSessionUBAConfigChange:(NSString *)arg1 isDel:(_Bool)arg2;
- (void)updateWCLabByXExpt:(NSArray *)arg1 deleteExptIds:(NSArray *)arg2 andExptFlag:(unsigned int)arg3 andAppIdList:(NSArray *)arg4;
@end
