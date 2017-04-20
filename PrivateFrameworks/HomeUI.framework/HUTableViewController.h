/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUTableViewController : UITableViewController {
    NSHashTable * _childViewControllersAtViewWillAppearTime;
    NSHashTable * _childViewControllersAtViewWillDisappearTime;
    NSMapTable * _installedChildViewControllersKeyedByCell;
    BOOL  _isUpdatingTableView;
    NSMutableArray * _tableViewUpdateRequestQueue;
}

@property (nonatomic, retain) NSHashTable *childViewControllersAtViewWillAppearTime;
@property (nonatomic, retain) NSHashTable *childViewControllersAtViewWillDisappearTime;
@property (nonatomic, retain) NSMapTable *installedChildViewControllersKeyedByCell;
@property (nonatomic) BOOL isUpdatingTableView;
@property (nonatomic, retain) NSMutableArray *tableViewUpdateRequestQueue;

- (void).cxx_destruct;
- (void)_performTableViewUpdateBlock:(id /* block */)arg1;
- (void)_performTableViewUpdateWithRequest:(id)arg1;
- (id)childViewControllersAtViewWillAppearTime;
- (id)childViewControllersAtViewWillDisappearTime;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (id)installedChildViewControllersKeyedByCell;
- (BOOL)isUpdatingTableView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setChildViewControllersAtViewWillAppearTime:(id)arg1;
- (void)setChildViewControllersAtViewWillDisappearTime:(id)arg1;
- (void)setInstalledChildViewControllersKeyedByCell:(id)arg1;
- (void)setIsUpdatingTableView:(BOOL)arg1;
- (void)setTableViewUpdateRequestQueue:(id)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableViewUpdateRequestQueue;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end