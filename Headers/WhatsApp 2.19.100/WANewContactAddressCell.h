//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WANewContactMultiValuePropertyCell.h"

@class WACountryInfo;

@interface WANewContactAddressCell : WANewContactMultiValuePropertyCell
{
    // Error parsing type: , name: cityField
    // Error parsing type: , name: stateField
    // Error parsing type: , name: zipField
    // Error parsing type: , name: countryField
    // Error parsing type: , name: textFieldArray
}

- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)updateFonts;
- (void)contactPropertyTextFieldValueChanged:(id)arg1;
- (_Bool)contactPropertyTextFieldShouldReturn:(id)arg1;
- (_Bool)contactPropertyTextFieldShouldBeginEditing:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic, retain) WACountryInfo *defaultCountryInfo;

@end
