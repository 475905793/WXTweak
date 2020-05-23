//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UISearchBarDelegate-Protocol.h"

@class NSArray, NSString, UISearchBar;

@interface FLEXClassesTableViewController : UITableViewController <UISearchBarDelegate>
{
    NSString *_binaryImageName;
    NSArray *_classNames;
    NSArray *_filteredClassNames;
    UISearchBar *_searchBar;
}

@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NSArray *filteredClassNames; // @synthesize filteredClassNames=_filteredClassNames;
@property(retain, nonatomic) NSArray *classNames; // @synthesize classNames=_classNames;
@property(copy, nonatomic) NSString *binaryImageName; // @synthesize binaryImageName=_binaryImageName;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)updateTitle;
- (void)loadClassNames;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

