//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCTChainCall.h"

@interface WCTInsert : WCTChainCall
{
    struct WCTPropertyList _propertyList;
    struct StatementInsert _statement;
    _Bool _replace;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)executeWithObjects:(id)arg1;
- (_Bool)doInsertObjects:(id)arg1 withError:(struct Error *)arg2;
- (id)initWithCore:(const shared_ptr_43d981cc *)arg1 andProperties:(const struct WCTPropertyList *)arg2 andTableName:(id)arg3 andReplaceFlag:(_Bool)arg4;
- (id)initWithCore:(const shared_ptr_43d981cc *)arg1 andClass:(Class)arg2 andTableName:(id)arg3 andReplaceFlag:(_Bool)arg4;

@end

