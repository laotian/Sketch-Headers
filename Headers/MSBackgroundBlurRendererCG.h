//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchRendering/MSBackgroundBlurRenderer-Protocol.h>

@class NSString;

@interface MSBackgroundBlurRendererCG : NSObject <MSBackgroundBlurRenderer>
{
}

- (void)renderDocumentContentUnderLayer:(id)arg1 inContext:(struct CGContext *)arg2 rect:(struct CGRect)arg3 scale:(double)arg4 forRenderingContext:(id)arg5;
- (void)renderBackgroundBlurBehindLayer:(id)arg1 context:(id)arg2 clippedToPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

