<script type="text/javascript">
    /* --------Toggle Subcategories based on Top Category ---------- */
    $('#regions').change(function() {
        
        var selectedCPACategory = $(this).val();
        console.log(selectedCPACategory);
        
        /* Need to check parent id -- */
        $("#CAT_Custom_812514_594052 option").each(function(i) {
            
            var parentId = $(this).attr('id');
            if (parentId == selectedCPACategory) {
                $(this).show();
            } else {
                $(this).hide();
            }
        });
        
    });
</script>