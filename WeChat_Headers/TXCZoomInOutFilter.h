//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCFilter.h"

@interface TXCZoomInOutFilter : TXCFilter
{
    int mTextureTransformMatrixLocation;
    int mAlphaUniforLocation;
    float mTextureTransformMatrix[16];
    double _mAlphaLevel;
}

@property(nonatomic) double mAlphaLevel; // @synthesize mAlphaLevel=_mAlphaLevel;
- (void)setZoomLevel:(float)arg1 number:(int)arg2;
- (void)setAlphaLevel:(float)arg1;
- (id)init;

@end

