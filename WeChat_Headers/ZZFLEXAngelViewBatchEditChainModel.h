//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ZZFLEXAngelViewBatchEditChainModel : NSObject
{
    NSArray *_listData;
    long long _editType;
}

@property(nonatomic) long long editType; // @synthesize editType=_editType;
@property(retain, nonatomic) NSArray *listData; // @synthesize listData=_listData;
- (void).cxx_destruct;
- (id)dataModelArrayByViewModelArray:(id)arg1;
- (void)p_updateViewModelArray:(id)arg1;
- (id)p_deleteWithSectionModel:(id)arg1 viewModelArray:(id)arg2;
- (CDUnknownBlockType)byViewClassName;
- (CDUnknownBlockType)byDataModel;
- (CDUnknownBlockType)byViewTag;
- (CDUnknownBlockType)all;
- (id)initWithType:(long long)arg1 andListData:(id)arg2;

@end

