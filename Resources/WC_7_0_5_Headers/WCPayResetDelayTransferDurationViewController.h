//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class DelaySwitchSettingLogic, GetTransferWordingResponse, NSString;

@interface WCPayResetDelayTransferDurationViewController : WCPayBaseViewController
{
    GetTransferWordingResponse *_wordingResponse;
    NSString *_selectedTitle;
    DelaySwitchSettingLogic *_delaySetting;
}

- (void).cxx_destruct;
- (id)defaultSelectedTitle;
@property(retain, nonatomic) DelaySwitchSettingLogic *delaySetting; // @synthesize delaySetting=_delaySetting;
- (void)makeCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)onOpenQA;
- (void)reloadTableView;
- (void)selcetCell:(struct WCTableViewNormalCellManager *)arg1;
@property(copy, nonatomic) NSString *selectedTitle; // @synthesize selectedTitle=_selectedTitle;
@property(retain, nonatomic) GetTransferWordingResponse *wordingResponse; // @synthesize wordingResponse=_wordingResponse;
- (void)setupModel;
- (void)setupNavigationBar;
- (int)switchType;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;

@end
