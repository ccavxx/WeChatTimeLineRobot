/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class LView, EAGLView_v2;

@interface VOIPVideoRender : XXUnknownSuperclass {
	EAGLView_v2* glview;
	LView* lview;
}
-(void).cxx_destruct;
-(id)getView;
-(id)getGLView;
-(id)getLView;
-(void)setDegrees:(float)degrees;
-(void)randerDefaultView:(id)view;
-(void)switchLocalView:(BOOL)view;
-(void)changeFrame:(CGRect)frame;
-(void)renderImage3:(char**)a3 Width:(unsigned long)width Height:(unsigned long)height;
-(void)renderImage2:(char*)a2 Width:(unsigned long)width Height:(unsigned long)height;
-(void)renderImage:(char*)image Width:(unsigned long)width Height:(unsigned long)height;
-(void)stopRender;
-(void)restartRender;
-(void)transformFrontImage;
-(void)transformBackImage;
-(void)addSingleTapTarget:(id)target action:(SEL)action;
-(void)dealloc;
-(id)initWithView:(id)view UseELGS2:(BOOL)a2 UseNV12:(BOOL)a12 IsMirrored:(BOOL)mirrored Layer:(id)layer;
-(id)initWithView:(id)view UseELGS2:(BOOL)a2 Layer:(id)layer;
@end

