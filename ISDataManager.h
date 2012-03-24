#import <Foundation/Foundation.h>

@interface ISDataManager : NSObject

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (ISDataManager *)sharedManager;
- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
