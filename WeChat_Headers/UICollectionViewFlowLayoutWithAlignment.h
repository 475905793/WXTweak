//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface UICollectionViewFlowLayoutWithAlignment : UICollectionViewFlowLayout
{
    double _betweenOfCell;
    long long _cellType;
    double _sumWidth;
}

@property(nonatomic) double sumWidth; // @synthesize sumWidth=_sumWidth;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) double betweenOfCell; // @synthesize betweenOfCell=_betweenOfCell;
- (void)setCellFrameWith:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)initWthType:(long long)arg1;
- (id)init;

@end

