/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LocationRetrieveDelegate.h"
#import "MMService.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class MMTimer, RadarSearchSetting, LocationRetriever, CLLocation, NSString;

@interface RadarSearchMgr : MMService <MMService, LocationRetrieveDelegate, PBMessageObserverDelegate> {
	BOOL _isStartReport;
	LocationRetriever* _locationRetrieve;
	MMTimer* _sendReportTimer;
	NSString* _ticket;
	RadarSearchSetting* _setting;
	CLLocation* _location;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) CLLocation* location;
@property(retain, nonatomic) RadarSearchSetting* setting;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)HandleRadarSearchResp:(id)resp Event:(unsigned long)event;
-(void)HandleVerifyUserResp:(id)resp Event:(unsigned long)event;
-(void)onVerifyOkSuccessed:(id)successed;
-(void)onVerifyOkFail:(id)fail;
-(void)onAddContactSuccessed:(id)successed;
-(void)onAddContactFail:(id)fail;
-(void)onRetrieveHeadingError:(int)error;
-(void)onRetrieveHeadingOK:(id)ok;
-(void)onRetrieveLocationError:(int)error;
-(void)onRetrieveLocationTimeOut:(id)anOut;
-(void)onRetrieveLocationOK:(id)ok;
-(id)getLocation;
-(void)sendRadarReportRequest:(BOOL)request;
-(void)verifyUsr:(id)usr withTicket:(id)ticket;
-(void)addFriend:(id)aFriend;
-(void)stopRadarReport;
-(void)removeRadarReportRequest;
-(void)startRadarReport;
-(void)stopResendRadarReportLogic;
-(void)startResendRadarReportLogic;
-(void)reSendRadarReportRequest;
-(void)stopRetrieveLocation;
-(void)startRetrieveLocation;
-(void)saveSetting;
-(void)loadRadarSearchSetting;
-(id)getSettingPath;
-(void)onServiceInit;
-(void)dealloc;
-(id)init;
@end

