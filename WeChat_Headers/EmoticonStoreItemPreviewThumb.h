//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface EmoticonStoreItemPreviewThumb : MMObject <PBCoding>
{
    NSString *m_previewUrl;
    NSString *m_desc;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_desc;
+ (void)PBArrayAdd_m_previewUrl;
@property(retain, nonatomic) NSString *m_desc; // @synthesize m_desc;
@property(retain, nonatomic) NSString *m_previewUrl; // @synthesize m_previewUrl;
- (void).cxx_destruct;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

