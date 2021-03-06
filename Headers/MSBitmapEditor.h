//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSOverlayItemDataSource-Protocol.h"

@class MSBitmapEditEventHandler, MSLayer, NSBezierPath, NSString;
@protocol MSBitmapEditable;

@interface MSBitmapEditor : NSObject <MSOverlayItemDataSource>
{
    MSBitmapEditEventHandler *_eventHandler;
}

@property(nonatomic) __weak MSBitmapEditEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (id)overlayItems:(unsigned long long)arg1 parameters:(struct MSRenderingParameters)arg2;
- (id)overlayItemImages:(struct CGColorSpace *)arg1 backingScale:(double)arg2;
- (struct CGAffineTransform)transformForConvertingFromImageToPage;
- (struct CGRect)imageBounds;
- (struct CGSize)imageSize;
- (double)zoomValue;
- (id)overlayItemsForMarchingAntsForPath:(id)arg1;
- (struct CGPoint)pointInBitmapLayer:(struct CGPoint)arg1;
- (void)refreshRectInBitmapCoordinates:(struct CGRect)arg1;
@property(retain, nonatomic) NSBezierPath *accumulatedSelection; // @dynamic accumulatedSelection;
@property(readonly, nonatomic) MSLayer<MSBitmapEditable> *bitmapEditableLayer; // @dynamic bitmapEditableLayer;
- (void)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)mouseDragged:(struct CGPoint)arg1;
- (void)mouseDown:(struct CGPoint)arg1 flags:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

