//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IAppDataExt.h"
#import "IPreEnterWechatLogicExt.h"
#import "MMKernelExt.h"
#import "MMWebViewDelegate.h"

@class AppCommunicateData, NSString, UINavigationController;

@interface WechatConnectHandler : MMObject <IAppDataExt, MMWebViewDelegate, MMKernelExt, IPreEnterWechatLogicExt>
{
    NSString *m_nsAppid;
    AppCommunicateData *m_appData;
    UINavigationController *m_oAuthViewController;
    _Bool m_isDoing;
}

- (void).cxx_destruct;
- (void)onPostQuit;
- (void)onPreQuit;
- (void)onKickQuit;
- (void)OnGotListAppSettingItem:(id)arg1 errType:(int)arg2;
- (id)webViewFailToLoad:(id)arg1;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (void)onWebViewDidStartLoad:(id)arg1;
- (void)OnOAuthCancel;
- (void)onPreEnterWechatDone;
- (void)removeOAuthView;
- (void)onRetry:(id)arg1;
- (void)createOAuthView;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)clearAllHandle;
- (void)cancelAllHandle;
- (void)cancelWechatConnect;
- (void)startWechatConnect:(id)arg1 withData:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

