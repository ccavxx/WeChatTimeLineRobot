/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface WCADCommentWrap : XXUnknownSuperclass {
	NSString* _adID;
	NSString* _publishID;
	NSString* _uxInfo;
	unsigned long _startPositionType;
	unsigned long _endPositionType;
	unsigned long _commentCount;
	float _tableContentY;
	unsigned long long _startTime;
	unsigned long long _endTime;
}
@property(assign, nonatomic) float tableContentY;
@property(assign, nonatomic) unsigned long commentCount;
@property(assign, nonatomic) unsigned long long endTime;
@property(assign, nonatomic) unsigned long long startTime;
@property(assign, nonatomic) unsigned long endPositionType;
@property(assign, nonatomic) unsigned long startPositionType;
@property(retain, nonatomic) NSString* uxInfo;
@property(retain, nonatomic) NSString* publishID;
@property(retain, nonatomic) NSString* adID;
-(void).cxx_destruct;
@end

