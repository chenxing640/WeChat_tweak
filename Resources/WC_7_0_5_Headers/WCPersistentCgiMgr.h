//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "INetworkStatusMgrExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "WCPersistentCgiDelegate.h"

@class NSArray, NSMutableArray, NSString;

@interface WCPersistentCgiMgr : MMService <MMService, WCPersistentCgiDelegate, MMKernelExt, INetworkStatusMgrExt>
{
    NSMutableArray *_requestingCgis;
    NSArray *_subClassArray;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)getPersitentCgis:(Class)arg1;
- (void)onAuthOK;
- (void)onRetry:(unsigned long long)arg1;
- (void)onServiceInit;
- (void)persistentCgi:(id)arg1 didFailWithError:(id)arg2 reponse:(id)arg3;
- (void)persistentCgi:(id)arg1 didGetResponse:(id)arg2;
- (id)persistentKey:(Class)arg1;
- (void)persitentCgi:(id)arg1;
- (void)removePersistentCgi:(id)arg1;
- (void)removePersistentCgiWithCustomUUID:(id)arg1 cgiClass:(Class)arg2;
@property(retain, nonatomic) NSMutableArray *requestingCgis; // @synthesize requestingCgis=_requestingCgis;
@property(retain, nonatomic) NSArray *subClassArray; // @synthesize subClassArray=_subClassArray;
- (void)startPersitentCgi:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
