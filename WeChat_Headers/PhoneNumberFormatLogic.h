//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableDictionary;

@interface PhoneNumberFormatLogic : MMObject
{
    NSMutableDictionary *m_dicConfig;
}

- (void).cxx_destruct;
- (id)getPhoneNumFromFullPhoneNum:(id)arg1;
- (id)getCountryCodeFromFullPhoneNum:(id)arg1;
- (id)getFormatedForNum:(id)arg1;
- (id)getFormatedForNum:(id)arg1 countryCode:(id)arg2;
- (id)getFormatedForNum:(id)arg1 countryIsoCode:(id)arg2;
- (id)getFormatedForNum:(id)arg1 countryInfo:(id)arg2;
- (id)formatedNumAfterTrimAutoFillNum:(id)arg1 fullNum:(id)arg2;
- (id)formatedNumForFullNum:(id)arg1 fullNum:(id)arg2;
- (id)autoFullLengthNum:(id)arg1 countryInfo:(id)arg2;
- (id)formatInfoForPhoneNum:(id)arg1 countryInfo:(id)arg2;
- (id)countrFormatConfigForCountryId:(id)arg1;
- (id)getPurePhoneNum:(id)arg1;
- (id)getMatch:(id)arg1 withRegex:(id)arg2;
- (_Bool)matchLeadingString:(id)arg1 withRegex:(id)arg2;
- (id)init;
- (void)loadConfig;

@end

