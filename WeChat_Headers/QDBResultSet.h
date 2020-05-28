//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, QDBDatabase, QDBStatement;

@interface QDBResultSet : NSObject
{
    QDBDatabase *_parentDB;
    QDBStatement *_statement;
    NSString *_query;
    NSMutableDictionary *_columnNameToIndexMap;
}

+ (id)resultSetWithStatement:(id)arg1 usingParentDatabase:(id)arg2;
@property(retain) QDBStatement *statement; // @synthesize statement=_statement;
@property(retain) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)dataForColumnIndex:(int)arg1;
- (id)dataForColumn:(id)arg1;
- (id)stringForColumnIndex:(int)arg1;
- (id)stringForColumn:(id)arg1;
- (int)intForColumnIndex:(int)arg1;
- (int)intForColumn:(id)arg1;
- (int)columnIndexForName:(id)arg1;
@property(readonly) NSMutableDictionary *columnNameToIndexMap;
- (_Bool)nextWithError:(id *)arg1;
- (_Bool)next;
- (int)columnCount;
- (void)setParentDB:(id)arg1;
- (void)close;
- (void)dealloc;

@end

