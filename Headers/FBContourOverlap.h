//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBBezierContour, NSArray, NSMutableArray;

@interface FBContourOverlap : NSObject
{
    NSMutableArray *_runs;
}

+ (id)contourOverlap;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)description;
- (BOOL)isBetweenContour:(id)arg1 andContour:(id)arg2;
@property(readonly, nonatomic) FBBezierContour *contour2;
@property(readonly, nonatomic) FBBezierContour *contour1;
- (BOOL)isEmpty;
- (BOOL)isComplete;
- (void)reset;
- (void)runsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSArray *overlapRuns;
- (BOOL)doesContainParameter:(double)arg1 onEdge:(id)arg2;
- (BOOL)doesContainCrossing:(id)arg1;
- (void)addOverlap:(id)arg1 forEdge1:(id)arg2 edge2:(id)arg3;
@property(readonly, nonatomic) NSMutableArray *runs_;

@end
