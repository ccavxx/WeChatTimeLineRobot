/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "MMObject.h"
#import "ICdnComMgrExt.h"

@class CdnRecordMediaInfo, NSMutableArray, CMessageWrap, NSString;

@interface RecordUploadCDNMgr : MMObject <ICdnComMgrExt, PBMessageObserverDelegate> {
	NSMutableArray* m_arrMsgWrap;
	NSMutableArray* m_arrRecordData;
	NSMutableArray* m_arrCDNUploadInfo;
	CMessageWrap* m_curMsgWrap;
	CdnRecordMediaInfo* m_curUploadMediaInfo;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) CdnRecordMediaInfo* m_curUploadMediaInfo;
@property(retain, nonatomic) CMessageWrap* m_curMsgWrap;
-(void).cxx_destruct;
-(void)OnCdnUpload:(id)upload;
-(void)OnSetCdnDnsInfo;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)HandleSendMsgResp:(id)resp;
-(void)HandleBatchTransCDNResp:(id)resp;
-(void)TryNextMsgWrap;
-(void)SendMsgOK:(long long)ok;
-(void)SendMsgFail;
-(BOOL)SendCurAppMsg;
-(void)RemoveMsgWrap:(id)wrap;
-(void)BatchTransCDNItem;
-(void)BatchTransCDNItemForMsgList;
-(void)UploadRecordData;
-(void)CheckCDNUploadMsgQueue;
-(void)StopCurUpload;
-(void)StopUploadRecordMsgByUsername:(id)username;
-(void)StopUploadRecordMsg:(id)msg;
-(void)StartUploadRecordMsg:(id)msg;
-(BOOL)IsRecordMsgUploading:(id)uploading;
-(void)dealloc;
-(id)init;
@end

