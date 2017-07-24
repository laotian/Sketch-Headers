//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "MSTilePlacerDelegate.h"

@class MSCGContextPool, MSRenderingDriver, MSTilePlacer, MSTileUpdateOperation, NSColorSpace, NSOperationQueue, NSSet, NSString;

@interface MSTiledLayer : CALayer <MSTilePlacerDelegate>
{
    BOOL _isRendering;
    BOOL _shouldHideOverlayControls;
    double _zoomLevel;
    id <MSTiledLayerDelegate> _tiledLayerDelegate;
    unsigned long long _state;
    double _renderingZoomLevel;
    NSColorSpace *_colorSpace;
    MSCGContextPool *_contextPool;
    id <MSRenderingContextCacheProvider> _renderingCacheProvider;
    MSRenderingDriver *_driver;
    MSTilePlacer *_tilePlacer;
    NSSet *_renderingTiles;
    CDUnknownBlockType _tileRenderingCompletion;
    NSOperationQueue *_renderingQueue;
    MSTileUpdateOperation *_layerUpdateOperation;
    struct CGPoint _scrollOrigin;
    struct CGRect _viewBounds;
}

@property(retain, nonatomic) MSTileUpdateOperation *layerUpdateOperation; // @synthesize layerUpdateOperation=_layerUpdateOperation;
@property(retain, nonatomic) NSOperationQueue *renderingQueue; // @synthesize renderingQueue=_renderingQueue;
@property(copy, nonatomic) CDUnknownBlockType tileRenderingCompletion; // @synthesize tileRenderingCompletion=_tileRenderingCompletion;
@property(retain, nonatomic) NSSet *renderingTiles; // @synthesize renderingTiles=_renderingTiles;
@property(retain, nonatomic) MSTilePlacer *tilePlacer; // @synthesize tilePlacer=_tilePlacer;
@property(readonly, nonatomic) MSRenderingDriver *driver; // @synthesize driver=_driver;
@property(retain, nonatomic) id <MSRenderingContextCacheProvider> renderingCacheProvider; // @synthesize renderingCacheProvider=_renderingCacheProvider;
@property(retain, nonatomic) MSCGContextPool *contextPool; // @synthesize contextPool=_contextPool;
@property(nonatomic) BOOL shouldHideOverlayControls; // @synthesize shouldHideOverlayControls=_shouldHideOverlayControls;
@property(nonatomic) BOOL isRendering; // @synthesize isRendering=_isRendering;
@property(retain, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(nonatomic) struct CGRect viewBounds; // @synthesize viewBounds=_viewBounds;
@property(nonatomic) struct CGPoint scrollOrigin; // @synthesize scrollOrigin=_scrollOrigin;
@property(nonatomic) double renderingZoomLevel; // @synthesize renderingZoomLevel=_renderingZoomLevel;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <MSTiledLayerDelegate> tiledLayerDelegate; // @synthesize tiledLayerDelegate=_tiledLayerDelegate;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingRenderingTiles;
- (void)observeRenderingOfTiles:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showOverlays:(BOOL)arg1;
- (void)transitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)replace;
- (void)prepare;
- (BOOL)shouldDrawPixelated;
- (void)clear;
- (BOOL)makeCurrentIfPossible;
- (void)concatTransform:(struct CATransform3D)arg1;
- (BOOL)isRenderable;
- (BOOL)isRenderableOrNew;
- (void)scrollBy:(struct CGPoint)arg1;
- (void)zoomBy:(double)arg1 centeredOnViewPoint:(struct CGPoint)arg2;
- (void)zoomBy:(double)arg1;
- (struct CGPoint)midPoint;
- (void)tilePlacer:(id)arg1 renderOverlayInRect:(struct CGRect)arg2;
- (void)tilePlacer:(id)arg1 requiresRedrawInRect:(struct CGRect)arg2;
- (void)removeOffscreenTiles;
- (void)adaptToPixelGridChange;
@property(readonly, nonatomic) struct CGRect tiledRect;
@property(readonly, nonatomic) unsigned long long tileCount;
- (void)refreshOverlayInViewRect:(struct CGRect)arg1 forPage:(id)arg2;
- (void)refreshOverlayWithBlock:(CDUnknownBlockType)arg1;
- (void)refreshContentForPage:(id)arg1 document:(id)arg2;
- (void)tileUpdateOperationDidComplete:(id)arg1;
- (void)refreshContentRect:(struct CGRect)arg1 forPage:(id)arg2 document:(id)arg3;
- (id)actionForKey:(id)arg1;
- (void)setupContextPool;
- (void)dealloc;
- (id)initWithDriver:(id)arg1 zoomLevel:(double)arg2 scrollOrigin:(struct CGPoint)arg3 viewBounds:(struct CGRect)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

