/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSData;

@interface NewYearSNS2016AmountCheckResp : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSData* ticket;
@property(retain, nonatomic) NSData* cookieBuffer;
@property(assign, nonatomic) unsigned cacheInterval;
@property(retain, nonatomic) NSMutableArray* feedAmountList;
@property(assign, nonatomic) unsigned feedAmountLevel;
@property(assign, nonatomic) unsigned action;
+(void)initialize;
@end

