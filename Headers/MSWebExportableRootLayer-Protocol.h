//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableRootLayer.h"

@class MSExporter, MSImmutableColor, MSImmutableDocumentData, MSImmutablePage;

@protocol MSWebExportableRootLayer <MSImmutableRootLayer>
@property(readonly, nonatomic) BOOL isFlowHome;
@property(readonly, nonatomic) BOOL webExporterShouldIncludeBackgroundColor;
@property(readonly, nonatomic) MSImmutableColor *webExporterBackgoundColor;
- (MSExporter *)exporterForWebOnPage:(MSImmutablePage *)arg1 document:(MSImmutableDocumentData *)arg2 scale:(double)arg3;
@end
