//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class LensIcon, LensPackage, NSString, PersonalDesigner;

@interface LensInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) PersonalDesigner *designer; // @dynamic designer;
@property(retain, nonatomic) LensIcon *icon; // @dynamic icon;
@property(retain, nonatomic) NSString *lensId; // @dynamic lensId;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) LensPackage *package; // @dynamic package;

@end

